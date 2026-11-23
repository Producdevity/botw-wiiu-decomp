#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488620;
extern "C" RuntimeTag data_1048861c;
extern "C" const RuntimeVTable data_10045c48;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_10045c38;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10045c28;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10045c18;

typedef Pointer<&data_10488620, &data_1048861c, &data_10045c48> Type0;
typedef Pointer<&data_10487130, &data_10487158, &data_10045c38> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10045c28> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10045c18> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021cf5a0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
