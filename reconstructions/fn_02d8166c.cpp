namespace {
struct InferredTable { unsigned char padding[576]; unsigned count; char** entries; };
struct InferredOwner { unsigned char padding[120]; InferredTable* table; };
struct InferredObject { unsigned char padding[924]; InferredOwner* owner; };
struct InferredResult { unsigned char padding[1900]; float value; };
}

extern "C" float fn_02d8166c(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    InferredTable* table = object->owner->table;
    char** entry = table->entries;
    if (table->count > 21) entry += 21;
    return reinterpret_cast<const InferredResult*>(*entry)->value;
}
