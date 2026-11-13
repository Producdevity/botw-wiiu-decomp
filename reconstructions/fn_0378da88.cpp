struct Handle { void* owner; int index; unsigned char checked; };
extern "C" void* fn_0378d8dc(void*, int, unsigned char);
extern "C" bool fn_0378da88(void* context) {
    const Handle* handle = static_cast<const Handle*>(context);
    if (handle->index == -1) return false;
    return fn_0378d8dc(handle->owner, handle->index, handle->checked) != 0;
}
