template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; template <> void RegisterClass<BaseVideoTexture>();
class MovieTexture; 
class WebCamTexture; template <> void RegisterClass<WebCamTexture>();
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; template <> void RegisterClass<CrashReportManager>();
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 83 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. MeshFilter
	RegisterClass<MeshFilter>();
	//9. Renderer
	RegisterClass<Renderer>();
	//10. LineRenderer
	RegisterClass<LineRenderer>();
	//11. GUILayer
	RegisterClass<GUILayer>();
	//12. Mesh
	RegisterClass<Mesh>();
	//13. NamedObject
	RegisterClass<NamedObject>();
	//14. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//15. Shader
	RegisterClass<Shader>();
	//16. Material
	RegisterClass<Material>();
	//17. Sprite
	RegisterClass<Sprite>();
	//18. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//19. Texture
	RegisterClass<Texture>();
	//20. Texture2D
	RegisterClass<Texture2D>();
	//21. RenderTexture
	RegisterClass<RenderTexture>();
	//22. Transform
	RegisterClass<Transform>();
	//23. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//24. Collider
	RegisterClass<Collider>();
	//25. MeshCollider
	RegisterClass<MeshCollider>();
	//26. AudioClip
	RegisterClass<AudioClip>();
	//27. SampleClip
	RegisterClass<SampleClip>();
	//28. WebCamTexture
	RegisterClass<WebCamTexture>();
	//29. BaseVideoTexture
	RegisterClass<BaseVideoTexture>();
	//30. Animation
	RegisterClass<Animation>();
	//31. Animator
	RegisterClass<Animator>();
	//32. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//33. UI::Canvas
	RegisterClass<UI::Canvas>();
	//34. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//35. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//36. Collider2D
	RegisterClass<Collider2D>();
	//37. MeshRenderer
	RegisterClass<MeshRenderer>();
	//38. AudioListener
	RegisterClass<AudioListener>();
	//39. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//40. BoxCollider
	RegisterClass<BoxCollider>();
	//41. PreloadData
	RegisterClass<PreloadData>();
	//42. Cubemap
	RegisterClass<Cubemap>();
	//43. Texture3D
	RegisterClass<Texture3D>();
	//44. Texture2DArray
	RegisterClass<Texture2DArray>();
	//45. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//46. TimeManager
	RegisterClass<TimeManager>();
	//47. AudioManager
	RegisterClass<AudioManager>();
	//48. InputManager
	RegisterClass<InputManager>();
	//49. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//50. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//51. TextAsset
	RegisterClass<TextAsset>();
	//52. PhysicsManager
	RegisterClass<PhysicsManager>();
	//53. TagManager
	RegisterClass<TagManager>();
	//54. ScriptMapper
	RegisterClass<ScriptMapper>();
	//55. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//56. MonoScript
	RegisterClass<MonoScript>();
	//57. MonoManager
	RegisterClass<MonoManager>();
	//58. PlayerSettings
	RegisterClass<PlayerSettings>();
	//59. BuildSettings
	RegisterClass<BuildSettings>();
	//60. ResourceManager
	RegisterClass<ResourceManager>();
	//61. NetworkManager
	RegisterClass<NetworkManager>();
	//62. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//63. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//64. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//65. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//66. CrashReportManager
	RegisterClass<CrashReportManager>();
	//67. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>();
	//68. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//69. LevelGameManager
	RegisterClass<LevelGameManager>();
	//70. AnimationClip
	RegisterClass<AnimationClip>();
	//71. Motion
	RegisterClass<Motion>();
	//72. AnimatorController
	RegisterClass<AnimatorController>();
	//73. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//74. RenderSettings
	RegisterClass<RenderSettings>();
	//75. FlareLayer
	RegisterClass<FlareLayer>();
	//76. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//77. LightmapSettings
	RegisterClass<LightmapSettings>();
	//78. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//79. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//80. Light
	RegisterClass<Light>();
	//81. Rigidbody
	RegisterClass<Rigidbody>();
	//82. AudioSource
	RegisterClass<AudioSource>();

}
