#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b5b0;
extern "C" RuntimeTag data_1048b5b4;
extern "C" const RuntimeVTable data_100d35d8;
extern "C" unsigned data_10487c50;
extern "C" RuntimeTag data_10487c54;
extern "C" const RuntimeVTable data_100d35a8;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_100d3538;

typedef Pointer<&data_1048b5b0, &data_1048b5b4, &data_100d35d8> Type0;
typedef Pointer<&data_10487c50, &data_10487c54, &data_100d35a8> Type1;
typedef Pointer<&data_10485ecc, &data_10487120, &data_100d3538> Type2;

static inline bool level2(const RuntimeTag* other) {
    return (other == Type2::get()) & 0xffu;
}

static inline unsigned level1(const RuntimeTag* other) {
    if (other == Type1::get())
        return true;
    return level2(other);
}

static inline bool level0(const RuntimeTag* other) {
    if (Type0::is(other))
        return true;
    return level1(other);
}

extern "C" bool fn_0250d500(const void*, const RuntimeTag* other) {
    return level0(other);
}
