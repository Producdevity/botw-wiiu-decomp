#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c728;
extern "C" RuntimeTag data_1048c72c;
extern "C" const RuntimeVTable data_10114a54;
extern "C" unsigned data_1048c074;
extern "C" RuntimeTag data_1048c078;
extern "C" const RuntimeVTable data_10114a44;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10114a34;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10114a24;

typedef Pointer<&data_1048c728, &data_1048c72c, &data_10114a54> Type0;
typedef Pointer<&data_1048c074, &data_1048c078, &data_10114a44> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10114a34> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10114a24> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_026d81d4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
