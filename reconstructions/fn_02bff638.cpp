#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10490180;
extern "C" RuntimeTag data_10490658;
extern "C" const RuntimeVTable data_101be444;
extern "C" unsigned data_10490160;
extern "C" RuntimeTag data_10490638;
extern "C" const RuntimeVTable data_101be434;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101be424;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101be414;

typedef Pointer<&data_10490180, &data_10490658, &data_101be444> Type0;
typedef Pointer<&data_10490160, &data_10490638, &data_101be434> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101be424> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101be414> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02bff638(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
