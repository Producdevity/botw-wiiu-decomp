#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10492648;
extern "C" RuntimeTag data_10493a78;
extern "C" const RuntimeVTable data_102bd080;
extern "C" unsigned data_1049264c;
extern "C" RuntimeTag data_10493ae0;
extern "C" const RuntimeVTable data_102bd140;
extern "C" unsigned data_10486774;
extern "C" RuntimeTag data_10493ad4;
extern "C" const RuntimeVTable data_102bcf30;

typedef Pointer<&data_10492648, &data_10493a78, &data_102bd080> Type0;
typedef Pointer<&data_1049264c, &data_10493ae0, &data_102bd140> Type1;
typedef Pointer<&data_10486774, &data_10493ad4, &data_102bcf30> Type2;

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

extern "C" bool fn_033e0270(const void*, const RuntimeTag* other) {
    return level0(other);
}
