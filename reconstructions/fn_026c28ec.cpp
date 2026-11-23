#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c604;
extern "C" RuntimeTag data_1048c608;
extern "C" const RuntimeVTable data_10110d44;
extern "C" unsigned data_1048c5fc;
extern "C" RuntimeTag data_1048c600;
extern "C" const RuntimeVTable data_10110cec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10110cdc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10110ccc;

typedef Pointer<&data_1048c604, &data_1048c608, &data_10110d44> Type0;
typedef Pointer<&data_1048c5fc, &data_1048c600, &data_10110cec> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10110cdc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10110ccc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_026c28ec(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
