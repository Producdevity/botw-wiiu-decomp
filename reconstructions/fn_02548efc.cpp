#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b864;
extern "C" RuntimeTag data_1048b860;
extern "C" const RuntimeVTable data_100dba34;
extern "C" unsigned data_1048b85c;
extern "C" RuntimeTag data_1048b858;
extern "C" const RuntimeVTable data_100dba24;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100dba14;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100dba04;

typedef Pointer<&data_1048b864, &data_1048b860, &data_100dba34> Type0;
typedef Pointer<&data_1048b85c, &data_1048b858, &data_100dba24> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100dba14> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100dba04> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02548efc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
