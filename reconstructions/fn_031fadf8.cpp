#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048f528;
extern "C" RuntimeTag data_10490d18;
extern "C" const RuntimeVTable data_10295e38;
extern "C" unsigned data_104863b0;
extern "C" RuntimeTag data_10490d48;
extern "C" const RuntimeVTable data_10295e28;
extern "C" unsigned data_10486398;
extern "C" RuntimeTag data_10490d44;
extern "C" const RuntimeVTable data_10295e08;
extern "C" unsigned data_10486394;
extern "C" RuntimeTag data_10490d40;
extern "C" const RuntimeVTable data_10295dd8;

typedef Pointer<&data_1048f528, &data_10490d18, &data_10295e38> Type0;
typedef Pointer<&data_104863b0, &data_10490d48, &data_10295e28> Type1;
typedef Pointer<&data_10486398, &data_10490d44, &data_10295e08> Type2;
typedef Pointer<&data_10486394, &data_10490d40, &data_10295dd8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_031fadf8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
