#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048de44;
extern "C" RuntimeTag data_1048de48;
extern "C" const RuntimeVTable data_10164efc;
extern "C" unsigned data_1048de40;
extern "C" RuntimeTag data_1048de3c;
extern "C" const RuntimeVTable data_10164eec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10164edc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10164ecc;

typedef Pointer<&data_1048de44, &data_1048de48, &data_10164efc> Type0;
typedef Pointer<&data_1048de40, &data_1048de3c, &data_10164eec> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10164edc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10164ecc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0291be90(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
