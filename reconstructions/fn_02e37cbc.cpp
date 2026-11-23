#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10490b3c;
extern "C" RuntimeTag data_10490b40;
extern "C" const RuntimeVTable data_10213dd4;
extern "C" unsigned data_10490b68;
extern "C" RuntimeTag data_10490b6c;
extern "C" const RuntimeVTable data_10213dc4;
extern "C" unsigned data_10490b2c;
extern "C" RuntimeTag data_10490b64;
extern "C" const RuntimeVTable data_10213db4;
extern "C" unsigned data_10489478;
extern "C" RuntimeTag data_10490b60;
extern "C" const RuntimeVTable data_10213da4;

typedef Pointer<&data_10490b3c, &data_10490b40, &data_10213dd4> Type0;
typedef Pointer<&data_10490b68, &data_10490b6c, &data_10213dc4> Type1;
typedef Pointer<&data_10490b2c, &data_10490b64, &data_10213db4> Type2;
typedef Pointer<&data_10489478, &data_10490b60, &data_10213da4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02e37cbc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
