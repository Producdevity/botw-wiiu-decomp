#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c504;
extern "C" RuntimeTag data_1048c508;
extern "C" const RuntimeVTable data_1010c4d0;
extern "C" unsigned data_1048c4fc;
extern "C" RuntimeTag data_1048c500;
extern "C" const RuntimeVTable data_1010c4c0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1010c4b0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1010c4a0;

typedef Pointer<&data_1048c504, &data_1048c508, &data_1010c4d0> Type0;
typedef Pointer<&data_1048c4fc, &data_1048c500, &data_1010c4c0> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1010c4b0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1010c4a0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_026a07a4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
