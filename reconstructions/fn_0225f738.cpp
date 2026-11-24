#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_10489160;
extern "C" RuntimeTag data_10489164;
extern "C" const RuntimeVTable data_100652bc;
extern "C" unsigned data_10489158;
extern "C" RuntimeTag data_1048915c;
extern "C" const RuntimeVTable data_100652ac;
extern "C" unsigned data_10489118;
extern "C" RuntimeTag data_1048911c;
extern "C" const RuntimeVTable data_1006529c;
extern "C" unsigned data_1048739c;
extern "C" RuntimeTag data_104873a0;
extern "C" const RuntimeVTable data_1006528c;
extern "C" unsigned data_10487388;
extern "C" RuntimeTag data_10487384;
extern "C" const RuntimeVTable data_1006527c;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_1006526c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006525c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006524c;

typedef Token<&data_10489160, &data_10489164, &data_100652bc> Type0;
typedef Token<&data_10489158, &data_1048915c, &data_100652ac> Type1;
typedef Token<&data_10489118, &data_1048911c, &data_1006529c> Type2;
typedef Token<&data_1048739c, &data_104873a0, &data_1006528c> Type3;
typedef Token<&data_10487388, &data_10487384, &data_1006527c> Type4;
typedef Token<&data_10487130, &data_10487158, &data_1006526c> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1006525c> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_1006524c> Type7;

static inline unsigned level7(const RuntimeTag* other) {
    return (other == &Type7::get()) & 0xffu;
}

static inline bool level6(const RuntimeTag* other) {
    if (other == Type6::get())
        return true;
    return level7(other);
}

static inline bool level5(const RuntimeTag* other) {
    bool result = other == &Type5::get() ? true : level6(other);
    return result;
}

static inline unsigned level4(const RuntimeTag* other) {
    return other == &Type4::get() ? 1u : level5(other);
}

static inline bool level3(const RuntimeTag* other) {
    if (other == &Type3::get())
        return true;
    return level4(other);
}

static inline bool level2(const RuntimeTag* other) {
    return other == &Type2::get() ? true : level3(other);
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == &Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0225f738(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}
