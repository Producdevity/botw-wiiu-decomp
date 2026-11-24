#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_1048fc10;
extern "C" RuntimeTag data_10490574;
extern "C" const RuntimeVTable data_101b4ecc;
extern "C" unsigned data_1048fc08;
extern "C" RuntimeTag data_1049056c;
extern "C" const RuntimeVTable data_101b4ebc;
extern "C" unsigned data_1048fc04;
extern "C" RuntimeTag data_10490568;
extern "C" const RuntimeVTable data_101b4eac;
extern "C" unsigned data_1048fbfc;
extern "C" RuntimeTag data_1049055c;
extern "C" const RuntimeVTable data_101b4e9c;
extern "C" unsigned data_1048fbf8;
extern "C" RuntimeTag data_10490558;
extern "C" const RuntimeVTable data_101b4e8c;
extern "C" unsigned data_1048fbdc;
extern "C" RuntimeTag data_10490534;
extern "C" const RuntimeVTable data_101b4e7c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101b4e6c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101b4df4;

typedef Token<&data_1048fc10, &data_10490574, &data_101b4ecc> Type0;
typedef Token<&data_1048fc08, &data_1049056c, &data_101b4ebc> Type1;
typedef Token<&data_1048fc04, &data_10490568, &data_101b4eac> Type2;
typedef Token<&data_1048fbfc, &data_1049055c, &data_101b4e9c> Type3;
typedef Token<&data_1048fbf8, &data_10490558, &data_101b4e8c> Type4;
typedef Token<&data_1048fbdc, &data_10490534, &data_101b4e7c> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_101b4e6c> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_101b4df4> Type7;

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

extern "C" bool fn_02ba86f8(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}
