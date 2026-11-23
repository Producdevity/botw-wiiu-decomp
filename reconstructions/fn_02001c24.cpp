#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486338;
extern "C" RuntimeTag data_1048633c;
extern "C" const RuntimeVTable data_10000628;
extern "C" unsigned data_10486328;
extern "C" RuntimeTag data_1048632c;
extern "C" const RuntimeVTable data_10000618;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_10000608;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_100005f8;

typedef Pointer<&data_10486338, &data_1048633c, &data_10000628> Type0;
typedef Pointer<&data_10486328, &data_1048632c, &data_10000618> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_10000608> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_100005f8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02001c24(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
