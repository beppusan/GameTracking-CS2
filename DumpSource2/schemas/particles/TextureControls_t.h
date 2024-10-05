class TextureControls_t
{
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleU;
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleV;
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU;
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV;
	CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation;
	CParticleCollectionRendererFloatInput m_flZoomScale;
	CParticleCollectionRendererFloatInput m_flDistortion;
	bool m_bRandomizeOffsets;
	bool m_bClampUVs;
	SpriteCardPerParticleScale_t m_nPerParticleBlend;
	SpriteCardPerParticleScale_t m_nPerParticleScale;
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU;
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV;
	SpriteCardPerParticleScale_t m_nPerParticleRotation;
	SpriteCardPerParticleScale_t m_nPerParticleZoom;
	SpriteCardPerParticleScale_t m_nPerParticleDistortion;
};