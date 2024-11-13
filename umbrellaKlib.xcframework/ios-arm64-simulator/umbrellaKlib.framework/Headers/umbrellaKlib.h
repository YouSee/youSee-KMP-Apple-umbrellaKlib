#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UmbrellaKlibKoin_coreModule, UmbrellaKlibNameQualifier, UmbrellaKlibMixpanelModule, UmbrellaKlibKoin_coreKoinDefinition<R>, UmbrellaKlibKoin_coreScope, UmbrellaKlibKoin_coreParametersHolder, UmbrellaKlibKotlinArray<T>, UmbrellaKlibKoin_coreInstanceFactory<T>, UmbrellaKlibKoin_coreSingleInstanceFactory<T>, UmbrellaKlibKoin_coreScopeDSL, UmbrellaKlibKoin_coreLockable, UmbrellaKlibKoin_coreKoin, UmbrellaKlibKotlinLazyThreadSafetyMode, UmbrellaKlibStately_concurrencyThreadLocalRef<T>, UmbrellaKlibKoin_coreLogger, UmbrellaKlibKoin_coreBeanDefinition<T>, UmbrellaKlibKoin_coreInstanceFactoryCompanion, UmbrellaKlibKoin_coreInstanceContext, UmbrellaKlibKoin_coreExtensionManager, UmbrellaKlibKoin_coreInstanceRegistry, UmbrellaKlibKoin_corePropertyRegistry, UmbrellaKlibKoin_coreScopeRegistry, UmbrellaKlibKotlinEnumCompanion, UmbrellaKlibKotlinEnum<E>, UmbrellaKlibKoin_coreLevel, UmbrellaKlibKoin_coreKind, UmbrellaKlibKoin_coreCallbacks<T>, UmbrellaKlibKoin_coreScopeRegistryCompanion;

@protocol UmbrellaKlibKoin_coreQualifier, UmbrellaKlibKotlinKClass, UmbrellaKlibKoinModule, UmbrellaKlibKotlinKDeclarationContainer, UmbrellaKlibKotlinKAnnotatedElement, UmbrellaKlibKotlinKClassifier, UmbrellaKlibKotlinLazy, UmbrellaKlibKoin_coreScopeCallback, UmbrellaKlibKotlinIterator, UmbrellaKlibKoin_coreKoinScopeComponent, UmbrellaKlibKotlinComparable, UmbrellaKlibKoin_coreKoinComponent, UmbrellaKlibKoin_coreKoinExtension;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface UmbrellaKlibBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface UmbrellaKlibBase (UmbrellaKlibBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface UmbrellaKlibMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface UmbrellaKlibMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorUmbrellaKlibKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface UmbrellaKlibNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface UmbrellaKlibByte : UmbrellaKlibNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface UmbrellaKlibUByte : UmbrellaKlibNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface UmbrellaKlibShort : UmbrellaKlibNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface UmbrellaKlibUShort : UmbrellaKlibNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface UmbrellaKlibInt : UmbrellaKlibNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface UmbrellaKlibUInt : UmbrellaKlibNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface UmbrellaKlibLong : UmbrellaKlibNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface UmbrellaKlibULong : UmbrellaKlibNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface UmbrellaKlibFloat : UmbrellaKlibNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface UmbrellaKlibDouble : UmbrellaKlibNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface UmbrellaKlibBoolean : UmbrellaKlibNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KoinModule")))
@protocol UmbrellaKlibKoinModule
@required
- (void)load __attribute__((swift_name("load()")));
@property (readonly) UmbrellaKlibKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol UmbrellaKlibKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NameQualifier")))
@interface UmbrellaKlibNameQualifier : UmbrellaKlibBase <UmbrellaKlibKoin_coreQualifier>
- (instancetype)initWithClazz:(id<UmbrellaKlibKotlinKClass>)clazz name:(NSString *)name __attribute__((swift_name("init(clazz:name:)"))) __attribute__((objc_designated_initializer));
- (UmbrellaKlibNameQualifier *)doCopyClazz:(id<UmbrellaKlibKotlinKClass>)clazz name:(NSString *)name __attribute__((swift_name("doCopy(clazz:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id _Nullable)resolve __attribute__((swift_name("resolve()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("MixpanelDelegate")))
@protocol UmbrellaKlibMixpanelDelegate
@required
- (void)trackEvent:(NSString *)event __attribute__((swift_name("track(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MixpanelModule")))
@interface UmbrellaKlibMixpanelModule : UmbrellaKlibBase <UmbrellaKlibKoinModule>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mixpanelModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UmbrellaKlibMixpanelModule *shared __attribute__((swift_name("shared")));
@property (readonly) UmbrellaKlibKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Umbrella")))
@interface UmbrellaKlibUmbrella : UmbrellaKlibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinHelperKt")))
@interface UmbrellaKlibKoinHelperKt : UmbrellaKlibBase
+ (void)start __attribute__((swift_name("start()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MixpanelQualifiersKt")))
@interface UmbrellaKlibMixpanelQualifiersKt : UmbrellaKlibBase
@property (class, readonly) UmbrellaKlibNameQualifier *MIXPANEL_DELEGATE __attribute__((swift_name("MIXPANEL_DELEGATE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface UmbrellaKlibKoin_coreModule : UmbrellaKlibBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (UmbrellaKlibKoin_coreKoinDefinition<id> *)factoryQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(UmbrellaKlibKoin_coreScope *, UmbrellaKlibKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(UmbrellaKlibKotlinArray<UmbrellaKlibKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(UmbrellaKlibKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(UmbrellaKlibKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<UmbrellaKlibKoin_coreModule *> *)plusModules:(NSArray<UmbrellaKlibKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<UmbrellaKlibKoin_coreModule *> *)plusModule:(UmbrellaKlibKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(UmbrellaKlibKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(UmbrellaKlibKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<UmbrellaKlibKoin_coreQualifier>)qualifier scopeSet:(void (^)(UmbrellaKlibKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (UmbrellaKlibKoin_coreKoinDefinition<id> *)singleQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(UmbrellaKlibKoin_coreScope *, UmbrellaKlibKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) UmbrellaKlibMutableSet<UmbrellaKlibKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<UmbrellaKlibKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) UmbrellaKlibMutableDictionary<NSString *, UmbrellaKlibKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol UmbrellaKlibKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol UmbrellaKlibKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol UmbrellaKlibKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol UmbrellaKlibKotlinKClass <UmbrellaKlibKotlinKDeclarationContainer, UmbrellaKlibKotlinKAnnotatedElement, UmbrellaKlibKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface UmbrellaKlibKoin_coreKoinDefinition<R> : UmbrellaKlibBase
- (instancetype)initWithModule:(UmbrellaKlibKoin_coreModule *)module factory:(UmbrellaKlibKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (UmbrellaKlibKoin_coreKoinDefinition<R> *)doCopyModule:(UmbrellaKlibKoin_coreModule *)module factory:(UmbrellaKlibKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UmbrellaKlibKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) UmbrellaKlibKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface UmbrellaKlibKoin_coreLockable : UmbrellaKlibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface UmbrellaKlibKoin_coreScope : UmbrellaKlibKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<UmbrellaKlibKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(UmbrellaKlibKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<UmbrellaKlibKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<UmbrellaKlibKotlinKClass>)clazz qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<UmbrellaKlibKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (UmbrellaKlibKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<UmbrellaKlibKotlinKClass>)clazz qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (UmbrellaKlibKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id<UmbrellaKlibKotlinLazy>)injectQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier mode:(UmbrellaKlibKotlinLazyThreadSafetyMode *)mode parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<UmbrellaKlibKotlinLazy>)injectOrNullQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier mode:(UmbrellaKlibKotlinLazyThreadSafetyMode *)mode parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(UmbrellaKlibKotlinArray<UmbrellaKlibKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<UmbrellaKlibKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(UmbrellaKlibKotlinArray<UmbrellaKlibKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) UmbrellaKlibStately_concurrencyThreadLocalRef<NSMutableArray<UmbrellaKlibKoin_coreParametersHolder *> *> *_parameterStackLocal __attribute__((swift_name("_parameterStackLocal")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) UmbrellaKlibKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<UmbrellaKlibKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface UmbrellaKlibKoin_coreParametersHolder : UmbrellaKlibBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(UmbrellaKlibBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (UmbrellaKlibKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<UmbrellaKlibKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<UmbrellaKlibKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (UmbrellaKlibKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) UmbrellaKlibBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface UmbrellaKlibKotlinArray<T> : UmbrellaKlibBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(UmbrellaKlibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<UmbrellaKlibKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface UmbrellaKlibKoin_coreInstanceFactory<T> : UmbrellaKlibKoin_coreLockable
- (instancetype)initWithBeanDefinition:(UmbrellaKlibKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) UmbrellaKlibKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(UmbrellaKlibKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(UmbrellaKlibKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (T _Nullable)getContext:(UmbrellaKlibKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCreatedContext:(UmbrellaKlibKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) UmbrellaKlibKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface UmbrellaKlibKoin_coreSingleInstanceFactory<T> : UmbrellaKlibKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(UmbrellaKlibKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(UmbrellaKlibKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(UmbrellaKlibKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(UmbrellaKlibKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(UmbrellaKlibKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface UmbrellaKlibKoin_coreScopeDSL : UmbrellaKlibBase
- (instancetype)initWithScopeQualifier:(id<UmbrellaKlibKoin_coreQualifier>)scopeQualifier module:(UmbrellaKlibKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (UmbrellaKlibKoin_coreKoinDefinition<id> *)factoryQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(UmbrellaKlibKoin_coreScope *, UmbrellaKlibKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (UmbrellaKlibKoin_coreKoinDefinition<id> *)scopedQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(UmbrellaKlibKoin_coreScope *, UmbrellaKlibKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) UmbrellaKlibKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<UmbrellaKlibKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface UmbrellaKlibKoin_coreKoin : UmbrellaKlibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (UmbrellaKlibKoin_coreScope *)createScopeT:(id<UmbrellaKlibKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (UmbrellaKlibKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (UmbrellaKlibKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (UmbrellaKlibKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<UmbrellaKlibKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<UmbrellaKlibKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<UmbrellaKlibKotlinKClass>)clazz qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (UmbrellaKlibKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (UmbrellaKlibKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<UmbrellaKlibKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<UmbrellaKlibKotlinKClass>)clazz qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (UmbrellaKlibKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (UmbrellaKlibKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<UmbrellaKlibKotlinLazy>)injectQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier mode:(UmbrellaKlibKotlinLazyThreadSafetyMode *)mode parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<UmbrellaKlibKotlinLazy>)injectOrNullQualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier mode:(UmbrellaKlibKotlinLazyThreadSafetyMode *)mode parameters:(UmbrellaKlibKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<UmbrellaKlibKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(UmbrellaKlibKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<UmbrellaKlibKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) UmbrellaKlibKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) UmbrellaKlibKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) UmbrellaKlibKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) UmbrellaKlibKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) UmbrellaKlibKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol UmbrellaKlibKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol UmbrellaKlibKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface UmbrellaKlibKotlinEnum<E> : UmbrellaKlibBase <UmbrellaKlibKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UmbrellaKlibKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface UmbrellaKlibKotlinLazyThreadSafetyMode : UmbrellaKlibKotlinEnum<UmbrellaKlibKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UmbrellaKlibKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) UmbrellaKlibKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) UmbrellaKlibKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (UmbrellaKlibKotlinArray<UmbrellaKlibKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UmbrellaKlibKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol UmbrellaKlibKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(UmbrellaKlibKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Stately_concurrencyThreadLocalRef")))
@interface UmbrellaKlibStately_concurrencyThreadLocalRef<T> : UmbrellaKlibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)get __attribute__((swift_name("get()")));
- (void)remove __attribute__((swift_name("remove()")));
- (void)setValue:(T _Nullable)value __attribute__((swift_name("set(value:)")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface UmbrellaKlibKoin_coreLogger : UmbrellaKlibBase
- (instancetype)initWithLevel:(UmbrellaKlibKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(UmbrellaKlibKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(UmbrellaKlibKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(UmbrellaKlibKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(UmbrellaKlibKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property UmbrellaKlibKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol UmbrellaKlibKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface UmbrellaKlibKoin_coreBeanDefinition<T> : UmbrellaKlibBase
- (instancetype)initWithScopeQualifier:(id<UmbrellaKlibKoin_coreQualifier>)scopeQualifier primaryType:(id<UmbrellaKlibKotlinKClass>)primaryType qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(UmbrellaKlibKoin_coreScope *, UmbrellaKlibKoin_coreParametersHolder *))definition kind:(UmbrellaKlibKoin_coreKind *)kind secondaryTypes:(NSArray<id<UmbrellaKlibKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (UmbrellaKlibKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<UmbrellaKlibKoin_coreQualifier>)scopeQualifier primaryType:(id<UmbrellaKlibKotlinKClass>)primaryType qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(UmbrellaKlibKoin_coreScope *, UmbrellaKlibKoin_coreParametersHolder *))definition kind:(UmbrellaKlibKoin_coreKind *)kind secondaryTypes:(NSArray<id<UmbrellaKlibKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<UmbrellaKlibKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<UmbrellaKlibKotlinKClass>)clazz qualifier:(id<UmbrellaKlibKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<UmbrellaKlibKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property UmbrellaKlibKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(UmbrellaKlibKoin_coreScope *, UmbrellaKlibKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) UmbrellaKlibKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<UmbrellaKlibKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<UmbrellaKlibKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<UmbrellaKlibKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<UmbrellaKlibKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface UmbrellaKlibKoin_coreInstanceFactoryCompanion : UmbrellaKlibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UmbrellaKlibKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface UmbrellaKlibKoin_coreInstanceContext : UmbrellaKlibBase
- (instancetype)initWithLogger:(UmbrellaKlibKoin_coreLogger *)logger scope:(UmbrellaKlibKoin_coreScope *)scope parameters:(UmbrellaKlibKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) UmbrellaKlibKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) UmbrellaKlibKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) UmbrellaKlibKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol UmbrellaKlibKoin_coreKoinComponent
@required
- (UmbrellaKlibKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol UmbrellaKlibKoin_coreKoinScopeComponent <UmbrellaKlibKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()"))) __attribute__((deprecated("not used internaly anymore")));
@property (readonly) UmbrellaKlibKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface UmbrellaKlibKoin_coreExtensionManager : UmbrellaKlibBase
- (instancetype)initWith_koin:(UmbrellaKlibKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<UmbrellaKlibKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<UmbrellaKlibKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<UmbrellaKlibKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface UmbrellaKlibKoin_coreInstanceRegistry : UmbrellaKlibBase
- (instancetype)initWith_koin:(UmbrellaKlibKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(UmbrellaKlibKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) UmbrellaKlibKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, UmbrellaKlibKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface UmbrellaKlibKoin_corePropertyRegistry : UmbrellaKlibBase
- (instancetype)initWith_koin:(UmbrellaKlibKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface UmbrellaKlibKoin_coreScopeRegistry : UmbrellaKlibBase
- (instancetype)initWith_koin:(UmbrellaKlibKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UmbrellaKlibKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<UmbrellaKlibKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) UmbrellaKlibKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<UmbrellaKlibKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface UmbrellaKlibKotlinEnumCompanion : UmbrellaKlibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UmbrellaKlibKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface UmbrellaKlibKoin_coreLevel : UmbrellaKlibKotlinEnum<UmbrellaKlibKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UmbrellaKlibKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) UmbrellaKlibKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) UmbrellaKlibKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) UmbrellaKlibKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) UmbrellaKlibKoin_coreLevel *none __attribute__((swift_name("none")));
+ (UmbrellaKlibKotlinArray<UmbrellaKlibKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UmbrellaKlibKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface UmbrellaKlibKoin_coreKind : UmbrellaKlibKotlinEnum<UmbrellaKlibKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UmbrellaKlibKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) UmbrellaKlibKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) UmbrellaKlibKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (UmbrellaKlibKotlinArray<UmbrellaKlibKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UmbrellaKlibKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface UmbrellaKlibKoin_coreCallbacks<T> : UmbrellaKlibBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (UmbrellaKlibKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol UmbrellaKlibKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(UmbrellaKlibKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface UmbrellaKlibKoin_coreScopeRegistryCompanion : UmbrellaKlibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UmbrellaKlibKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
