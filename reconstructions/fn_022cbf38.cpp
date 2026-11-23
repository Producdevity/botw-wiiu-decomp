#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104898a4;
extern "C" RuntimeTag data_104898a8;
extern "C" const RuntimeVTable data_1007676c;
extern "C" unsigned data_10487104;
extern "C" RuntimeTag data_10487108;
extern "C" const RuntimeVTable data_1007675c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007673c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007672c;

typedef Pointer<&data_104898a4, &data_104898a8, &data_1007676c> Type0;
typedef Pointer<&data_10487104, &data_10487108, &data_1007675c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1007673c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1007672c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022cbf38(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
