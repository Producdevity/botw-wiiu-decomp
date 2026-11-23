#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486724;
extern "C" RuntimeTag data_10493a70;
extern "C" const RuntimeVTable data_1036ee60;
extern "C" unsigned data_10486778;
extern "C" RuntimeTag data_10493ad8;
extern "C" const RuntimeVTable data_1036ee90;
extern "C" unsigned data_10486774;
extern "C" RuntimeTag data_10493ad4;
extern "C" const RuntimeVTable data_1036ede8;

typedef Pointer<&data_10486724, &data_10493a70, &data_1036ee60> Type0;
typedef Pointer<&data_10486778, &data_10493ad8, &data_1036ee90> Type1;
typedef Pointer<&data_10486774, &data_10493ad4, &data_1036ede8> Type2;

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

extern "C" bool fn_03afd648(const void*, const RuntimeTag* other) {
    return level0(other);
}
