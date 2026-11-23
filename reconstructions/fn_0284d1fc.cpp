#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d640;
extern "C" RuntimeTag data_1048d644;
extern "C" const RuntimeVTable data_10145550;
extern "C" unsigned data_1048d638;
extern "C" RuntimeTag data_1048d63c;
extern "C" const RuntimeVTable data_10145540;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10145530;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10145520;

typedef Pointer<&data_1048d640, &data_1048d644, &data_10145550> Type0;
typedef Pointer<&data_1048d638, &data_1048d63c, &data_10145540> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10145530> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10145520> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0284d1fc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
