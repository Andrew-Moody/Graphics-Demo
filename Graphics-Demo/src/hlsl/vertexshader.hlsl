cbuffer WorldCBuff : register(b0)
{
    matrix worldMat;
};


cbuffer ViewProjCBuff : register(b1)
{
    matrix viewProjMat;
};


struct VSOut
{
    float4 color : Color;
    float4 pos : SV_Position;
};


VSOut main(float3 pos : Position, float4 color : Color)
{
    VSOut vsout;
    // matrix * matrix is actually element wise mult not matrix mult
    vsout.pos = mul(float4(pos, 1.0f), mul(worldMat, viewProjMat));
    vsout.color = color;

    return vsout;
}