#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_1048ad60;
extern "C" RuntimeTag data_1048ad5c;
extern "C" const RuntimeVTable data_100b4f84;
extern "C" unsigned data_1048a98c;
extern "C" RuntimeTag data_1048a988;
extern "C" const RuntimeVTable data_100b4f74;
extern "C" unsigned data_104877bc;
extern "C" RuntimeTag data_104877c0;
extern "C" const RuntimeVTable data_100b4f64;
extern "C" unsigned data_1048739c;
extern "C" RuntimeTag data_104873a0;
extern "C" const RuntimeVTable data_100b4f54;
extern "C" unsigned data_10487388;
extern "C" RuntimeTag data_10487384;
extern "C" const RuntimeVTable data_100b4f44;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_100b4f34;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b4f24;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b4f14;

typedef Token<&data_1048ad60, &data_1048ad5c, &data_100b4f84> Type0;
typedef Token<&data_1048a98c, &data_1048a988, &data_100b4f74> Type1;
typedef Token<&data_104877bc, &data_104877c0, &data_100b4f64> Type2;
typedef Token<&data_1048739c, &data_104873a0, &data_100b4f54> Type3;
typedef Token<&data_10487388, &data_10487384, &data_100b4f44> Type4;
typedef Token<&data_10487130, &data_10487158, &data_100b4f34> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100b4f24> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b4f14> Type7;

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

extern "C" bool fn_0243a8d0(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}
