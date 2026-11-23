#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487e70;
extern "C" RuntimeTag data_1049298c;
extern "C" const RuntimeVTable data_102a1260;
extern "C" unsigned data_10486e3c;
extern "C" RuntimeTag data_10487328;
extern "C" const RuntimeVTable data_102a1250;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102a1240;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102a1230;

typedef Pointer<&data_10487e70, &data_1049298c, &data_102a1260> Type0;
typedef Pointer<&data_10486e3c, &data_10487328, &data_102a1250> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_102a1240> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_102a1230> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_032887fc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
