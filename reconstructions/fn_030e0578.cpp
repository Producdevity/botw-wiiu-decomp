#include "botw/runtime_tag_query.h"
#include "botw/safe_string.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_1027d3b0;
extern "C" const SafeString data_10549fec;

typedef Token<&data_10485cd8, &data_10485cdc, &data_1027d3b0> DerivedType;

namespace {
struct Base;
typedef bool (*DerivedQuery)(const Base* object, const RuntimeTag* type);

struct Base {
    unsigned char unknown_00[4];
    SafeString name;
    unsigned char unknown_0c[220];
    void* const* vtable;
};
typedef char BaseSize[sizeof(Base) == 236 ? 1 : -1];

struct Derived : Base {};

struct Holder {
    unsigned char unknown_00[4];
    Base* object;
};

inline bool is_derived_from(const Base* object) {
    const RuntimeTag* type = &DerivedType::get();
    return reinterpret_cast<DerivedQuery>(object->vtable[3])(object, type);
}

inline Derived* cast_derived(Base* object) {
    if (object != 0 && is_derived_from(object))
        return static_cast<Derived*>(object);
    return 0;
}
}

extern "C" const SafeString* fn_030e0578(const Holder* holder) {
    Derived* derived = cast_derived(holder->object);
    if (derived)
        return &derived->name;
    return &data_10549fec;
}
