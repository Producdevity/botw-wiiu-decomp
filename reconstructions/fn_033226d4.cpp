#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104870dc;
extern "C" RuntimeTag data_1048b0e0;
extern "C" const RuntimeVTable data_102af9b4;
extern "C" unsigned data_104870d8;
extern "C" RuntimeTag data_1048b0dc;
extern "C" const RuntimeVTable data_102af9a4;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102af994;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102af984;

typedef Pointer<&data_104870dc, &data_1048b0e0, &data_102af9b4> Type0;
typedef Pointer<&data_104870d8, &data_1048b0dc, &data_102af9a4> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_102af994> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_102af984> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_033226d4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
