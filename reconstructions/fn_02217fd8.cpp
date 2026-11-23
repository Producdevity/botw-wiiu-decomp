#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104889c8;
extern "C" RuntimeTag data_104889cc;
extern "C" const RuntimeVTable data_10057198;
extern "C" unsigned data_10488978;
extern "C" RuntimeTag data_1048897c;
extern "C" const RuntimeVTable data_10057188;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10057178;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10057168;

typedef Pointer<&data_104889c8, &data_104889cc, &data_10057198> Type0;
typedef Pointer<&data_10488978, &data_1048897c, &data_10057188> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10057178> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10057168> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02217fd8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
