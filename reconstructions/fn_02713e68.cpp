#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487c48;
extern "C" RuntimeTag data_10487c4c;
extern "C" const RuntimeVTable data_1011b350;
extern "C" unsigned data_10487c50;
extern "C" RuntimeTag data_10487c54;
extern "C" const RuntimeVTable data_1011b3a0;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_1011b2c0;

typedef Pointer<&data_10487c48, &data_10487c4c, &data_1011b350> Type0;
typedef Pointer<&data_10487c50, &data_10487c54, &data_1011b3a0> Type1;
typedef Pointer<&data_10485ecc, &data_10487120, &data_1011b2c0> Type2;

static inline unsigned level2(const RuntimeTag* other) {
    return (other == Type2::get()) & 0xffu;
}

static inline unsigned level1(const RuntimeTag* other) {
    if (other == Type1::get())
        return true;
    return level2(other);
}

static inline bool level0(const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    return level1(other) != 0;
}

extern "C" bool fn_02713e68(const void*, const RuntimeTag* other) {
    return level0(other);
}
