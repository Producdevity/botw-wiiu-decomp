#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_10489418;
extern "C" RuntimeTag data_1048941c;
extern "C" const RuntimeVTable data_1006b8f8;
extern "C" unsigned data_10488284;
extern "C" RuntimeTag data_10488288;
extern "C" const RuntimeVTable data_1006b888;
extern "C" unsigned data_10487af8;
extern "C" RuntimeTag data_10487afc;
extern "C" const RuntimeVTable data_1006b878;
extern "C" unsigned data_104876f0;
extern "C" RuntimeTag data_104876f4;
extern "C" const RuntimeVTable data_1006b868;
extern "C" unsigned data_10487388;
extern "C" RuntimeTag data_10487384;
extern "C" const RuntimeVTable data_1006b858;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_1006b848;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006b838;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006b828;

typedef Token<&data_10489418, &data_1048941c, &data_1006b8f8> Type0;
typedef Token<&data_10488284, &data_10488288, &data_1006b888> Type1;
typedef Token<&data_10487af8, &data_10487afc, &data_1006b878> Type2;
typedef Token<&data_104876f0, &data_104876f4, &data_1006b868> Type3;
typedef Token<&data_10487388, &data_10487384, &data_1006b858> Type4;
typedef Token<&data_10487130, &data_10487158, &data_1006b848> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1006b838> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_1006b828> Type7;

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

extern "C" bool fn_0227ea70(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}
