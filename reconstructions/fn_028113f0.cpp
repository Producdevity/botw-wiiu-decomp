#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d300;
extern "C" RuntimeTag data_1048d304;
extern "C" const RuntimeVTable data_1013c668;
extern "C" unsigned data_1048d2f8;
extern "C" RuntimeTag data_1048d2fc;
extern "C" const RuntimeVTable data_1013c648;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013c638;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013c628;

typedef Pointer<&data_1048d300, &data_1048d304, &data_1013c668> Type0;
typedef Pointer<&data_1048d2f8, &data_1048d2fc, &data_1013c648> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1013c638> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1013c628> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_028113f0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
