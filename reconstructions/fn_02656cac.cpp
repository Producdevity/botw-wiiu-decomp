#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c208;
extern "C" RuntimeTag data_1048c20c;
extern "C" const RuntimeVTable data_101011fc;
extern "C" unsigned data_1048c204;
extern "C" RuntimeTag data_1048c200;
extern "C" const RuntimeVTable data_101011ec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101011dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101011cc;

typedef Pointer<&data_1048c208, &data_1048c20c, &data_101011fc> Type0;
typedef Pointer<&data_1048c204, &data_1048c200, &data_101011ec> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101011dc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101011cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02656cac(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
