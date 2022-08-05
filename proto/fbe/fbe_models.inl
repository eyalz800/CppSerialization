//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

namespace FBE {

template <typename T, typename TBase>
inline void FieldModelBase<T, TBase>::get(T& value, T defaults) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
    {
        value = defaults;
        return;
    }

    value = (T)(*((const TBase*)(_buffer.data() + _buffer.offset() + fbe_offset())));
}

template <typename T, typename TBase>
inline void FieldModelBase<T, TBase>::set(T value) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    *((TBase*)(_buffer.data() + _buffer.offset() + fbe_offset())) = (TBase)value;
}

template <typename T>
inline size_t FieldModel<std::optional<T>>::fbe_extra() const noexcept
{
    if (!has_value())
        return 0;

    uint32_t fbe_optional_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset() + 1));
    if ((fbe_optional_offset == 0) || ((_buffer.offset() + fbe_optional_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_optional_offset);
    size_t fbe_result = value.fbe_size() + value.fbe_extra();
    _buffer.unshift(fbe_optional_offset);
    return fbe_result;
}

template <typename T>
inline bool FieldModel<std::optional<T>>::has_value() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return false;

    uint8_t fbe_has_value = *((const uint8_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    return (fbe_has_value != 0);
}

template <typename T>
inline bool FieldModel<std::optional<T>>::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint8_t fbe_has_value = *((const uint8_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if (fbe_has_value == 0)
        return true;

    uint32_t fbe_optional_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset() + 1));
    if (fbe_optional_offset == 0)
        return false;

    _buffer.shift(fbe_optional_offset);
    bool fbe_result = value.verify();
    _buffer.unshift(fbe_optional_offset);
    return fbe_result;
}

template <typename T>
inline size_t FieldModel<std::optional<T>>::get_begin() const noexcept
{
    if (!has_value())
        return 0;

    uint32_t fbe_optional_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset() + 1));
    assert((fbe_optional_offset > 0) && "Model is broken!");
    if (fbe_optional_offset == 0)
        return 0;

    _buffer.shift(fbe_optional_offset);
    return fbe_optional_offset;
}

template <typename T>
inline void FieldModel<std::optional<T>>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

template <typename T>
inline void FieldModel<std::optional<T>>::get(std::optional<T>& opt, const std::optional<T>& defaults) const noexcept
{
    opt = defaults;

    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    T temp = T();
    value.get(temp);
    opt.emplace(temp);

    get_end(fbe_begin);
}

template <typename T>
inline size_t FieldModel<std::optional<T>>::set_begin(bool has_value)
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint8_t fbe_has_value = has_value ? 1 : 0;
    *((uint8_t*)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_has_value;
    if (fbe_has_value == 0)
        return 0;

    uint32_t fbe_optional_size = (uint32_t)value.fbe_size();
    uint32_t fbe_optional_offset = (uint32_t)(_buffer.allocate(fbe_optional_size) - _buffer.offset());
    assert(((fbe_optional_offset > 0) && ((_buffer.offset() + fbe_optional_offset + fbe_optional_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_optional_offset == 0) || ((_buffer.offset() + fbe_optional_offset + fbe_optional_size) > _buffer.size()))
        return 0;

    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset() + 1)) = fbe_optional_offset;

    _buffer.shift(fbe_optional_offset);
    return fbe_optional_offset;
}

template <typename T>
inline void FieldModel<std::optional<T>>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

template <typename T>
inline void FieldModel<std::optional<T>>::set(const std::optional<T>& opt)
{
    size_t fbe_begin = set_begin(opt.has_value());
    if (fbe_begin == 0)
        return;

    if (opt)
        value.set(opt.value());

    set_end(fbe_begin);
}

template <typename T, size_t N>
inline const uint8_t* FieldModelArray<T, N>::data() const noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    return _buffer.data() + _buffer.offset() + fbe_offset();
}

template <typename T, size_t N>
inline uint8_t* FieldModelArray<T, N>::data() noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    return _buffer.data() + _buffer.offset() + fbe_offset();
}

template <typename T, size_t N>
inline FieldModel<T> FieldModelArray<T, N>::operator[](size_t index) const noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    assert((index < N) && "Index is out of bounds!");

    FieldModel<T> fbe_model(_buffer, fbe_offset());
    fbe_model.fbe_shift(index * fbe_model.fbe_size());
    return fbe_model;
}

template <typename T, size_t N>
inline bool FieldModelArray<T, N>::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return false;

    FieldModel<T> fbe_model(_buffer, fbe_offset());
    for (size_t i = N; i-- > 0;)
    {
        if (!fbe_model.verify())
            return false;
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }

    return true;
}

template <typename T, size_t N>
template <size_t S>
inline void FieldModelArray<T, N>::get(T (&values)[S]) const noexcept
{
    auto fbe_model = (*this)[0];
    for (size_t i = 0; (i < S) && (i < N); ++i)
    {
        fbe_model.get(values[i]);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T, size_t N>
template <size_t S>
inline void FieldModelArray<T, N>::get(std::array<T, S>& values) const noexcept
{
    auto fbe_model = (*this)[0];
    for (size_t i = 0; (i < S) && (i < N); ++i)
    {
        fbe_model.get(values[i]);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T, size_t N>
inline void FieldModelArray<T, N>::get(std::vector<T>& values) const noexcept
{
    values.clear();
    values.reserve(N);

    auto fbe_model = (*this)[0];
    for (size_t i = N; i-- > 0;)
    {
        T value = T();
        fbe_model.get(value);
        values.emplace_back(value);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T, size_t N>
template <size_t S>
inline void FieldModelArray<T, N>::set(const T (&values)[S]) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = (*this)[0];
    for (size_t i = 0; (i < S) && (i < N); ++i)
    {
        fbe_model.set(values[i]);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T, size_t N>
template <size_t S>
inline void FieldModelArray<T, N>::set(const std::array<T, S>& values) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = (*this)[0];
    for (size_t i = 0; (i < S) && (i < N); ++i)
    {
        fbe_model.set(values[i]);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T, size_t N>
inline void FieldModelArray<T, N>::set(const std::vector<T>& values) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = (*this)[0];
    for (size_t i = 0; (i < values.size()) && (i < N); ++i)
    {
        fbe_model.set(values[i]);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T>
inline size_t FieldModelVector<T>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_vector_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_vector_offset == 0) || ((_buffer.offset() + fbe_vector_offset + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_vector_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_vector_offset));

    size_t fbe_result = 4;
    FieldModel<T> fbe_model(_buffer, fbe_vector_offset + 4);
    for (size_t i = fbe_vector_size; i-- > 0;)
    {
        fbe_result += fbe_model.fbe_size() + fbe_model.fbe_extra();
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
    return fbe_result;
}

template <typename T>
inline size_t FieldModelVector<T>::offset() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_vector_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    return fbe_vector_offset;
}

template <typename T>
inline size_t FieldModelVector<T>::size() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_vector_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_vector_offset == 0) || ((_buffer.offset() + fbe_vector_offset + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_vector_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_vector_offset));
    return fbe_vector_size;
}

template <typename T>
inline FieldModel<T> FieldModelVector<T>::operator[](size_t index) const noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");

    uint32_t fbe_vector_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    assert(((fbe_vector_offset > 0) && ((_buffer.offset() + fbe_vector_offset + 4) <= _buffer.size())) && "Model is broken!");

    [[maybe_unused]] uint32_t fbe_vector_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_vector_offset));
    assert((index < fbe_vector_size) && "Index is out of bounds!");

    FieldModel<T> fbe_model(_buffer, fbe_vector_offset + 4);
    fbe_model.fbe_shift(index * fbe_model.fbe_size());
    return fbe_model;
}

template <typename T>
inline FieldModel<T> FieldModelVector<T>::resize(size_t size)
{
    FieldModel<T> fbe_model(_buffer, fbe_offset());

    uint32_t fbe_vector_size = (uint32_t)(size * fbe_model.fbe_size());
    uint32_t fbe_vector_offset = (uint32_t)(_buffer.allocate(4 + fbe_vector_size) - _buffer.offset());
    assert(((fbe_vector_offset > 0) && ((_buffer.offset() + fbe_vector_offset + 4) <= _buffer.size())) && "Model is broken!");

    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_vector_offset;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_vector_offset)) = (uint32_t)size;

    memset((char*)(_buffer.data() + _buffer.offset() + fbe_vector_offset + 4), 0, fbe_vector_size);

    return FieldModel<T>(_buffer, fbe_vector_offset + 4);
}

template <typename T>
inline bool FieldModelVector<T>::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_vector_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if (fbe_vector_offset == 0)
        return true;

    if ((_buffer.offset() + fbe_vector_offset + 4) > _buffer.size())
        return false;

    uint32_t fbe_vector_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_vector_offset));

    FieldModel<T> fbe_model(_buffer, fbe_vector_offset + 4);
    for (size_t i = fbe_vector_size; i-- > 0;)
    {
        if (!fbe_model.verify())
            return false;
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }

    return true;
}

template <typename T>
inline void FieldModelVector<T>::get(std::vector<T>& values) const noexcept
{
    values.clear();

    size_t fbe_vector_size = size();
    if (fbe_vector_size == 0)
        return;

    values.reserve(fbe_vector_size);

    auto fbe_model = (*this)[0];
    for (size_t i = fbe_vector_size; i-- > 0;)
    {
        T value = T();
        fbe_model.get(value);
        values.emplace_back(value);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T>
inline void FieldModelVector<T>::get(std::list<T>& values) const noexcept
{
    values.clear();

    size_t fbe_vector_size = size();
    if (fbe_vector_size == 0)
        return;

    auto fbe_model = (*this)[0];
    for (size_t i = fbe_vector_size; i-- > 0;)
    {
        T value = T();
        fbe_model.get(value);
        values.emplace_back(value);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T>
inline void FieldModelVector<T>::get(std::set<T>& values) const noexcept
{
    values.clear();

    size_t fbe_vector_size = size();
    if (fbe_vector_size == 0)
        return;

    auto fbe_model = (*this)[0];
    for (size_t i = fbe_vector_size; i-- > 0;)
    {
        T value = T();
        fbe_model.get(value);
        values.emplace(value);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T>
inline void FieldModelVector<T>::set(const std::vector<T>& values) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = resize(values.size());
    for (const auto& value : values)
    {
        fbe_model.set(value);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T>
inline void FieldModelVector<T>::set(const std::list<T>& values) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = resize(values.size());
    for (const auto& value : values)
    {
        fbe_model.set(value);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename T>
inline void FieldModelVector<T>::set(const std::set<T>& values) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = resize(values.size());
    for (const auto& value : values)
    {
        fbe_model.set(value);
        fbe_model.fbe_shift(fbe_model.fbe_size());
    }
}

template <typename TKey, typename TValue>
inline size_t FieldModelMap<TKey, TValue>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_map_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_map_offset == 0) || ((_buffer.offset() + fbe_map_offset + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_map_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_map_offset));

    size_t fbe_result = 4;
    FieldModel<TKey> fbe_model_key(_buffer, fbe_map_offset + 4);
    FieldModel<TValue> fbe_model_value(_buffer, fbe_map_offset + 4 + fbe_model_key.fbe_size());
    for (size_t i = fbe_map_size; i-- > 0;)
    {
        fbe_result += fbe_model_key.fbe_size() + fbe_model_key.fbe_extra();
        fbe_model_key.fbe_shift(fbe_model_key.fbe_size() + fbe_model_value.fbe_size());
        fbe_result += fbe_model_value.fbe_size() + fbe_model_value.fbe_extra();
        fbe_model_value.fbe_shift(fbe_model_key.fbe_size() + fbe_model_value.fbe_size());
    }
    return fbe_result;
}

template <typename TKey, typename TValue>
inline size_t FieldModelMap<TKey, TValue>::offset() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_map_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    return fbe_map_offset;
}

template <typename TKey, typename TValue>
inline size_t FieldModelMap<TKey, TValue>::size() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_map_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_map_offset == 0) || ((_buffer.offset() + fbe_map_offset + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_map_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_map_offset));
    return fbe_map_size;
}

template <typename TKey, typename TValue>
inline std::pair<FieldModel<TKey>, FieldModel<TValue>> FieldModelMap<TKey, TValue>::operator[](size_t index) const noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");

    uint32_t fbe_map_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    assert(((fbe_map_offset > 0) && ((_buffer.offset() + fbe_map_offset + 4) <= _buffer.size())) && "Model is broken!");

    [[maybe_unused]] uint32_t fbe_map_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_map_offset));
    assert((index < fbe_map_size) && "Index is out of bounds!");

    FieldModel<TKey> fbe_model_key(_buffer, fbe_map_offset + 4);
    FieldModel<TValue> fbe_model_value(_buffer, fbe_map_offset + 4 + fbe_model_key.fbe_size());
    fbe_model_key.fbe_shift(index * (fbe_model_key.fbe_size() + fbe_model_value.fbe_size()));
    fbe_model_value.fbe_shift(index * (fbe_model_key.fbe_size() + fbe_model_value.fbe_size()));
    return std::make_pair(fbe_model_key, fbe_model_value);
}

template <typename TKey, typename TValue>
inline std::pair<FieldModel<TKey>, FieldModel<TValue>> FieldModelMap<TKey, TValue>::resize(size_t size)
{
    FieldModel<TKey> fbe_model_key(_buffer, fbe_offset());
    FieldModel<TValue> fbe_model_value(_buffer, fbe_offset() + fbe_model_key.fbe_size());

    uint32_t fbe_map_size = (uint32_t)(size * (fbe_model_key.fbe_size() + fbe_model_value.fbe_size()));
    uint32_t fbe_map_offset = (uint32_t)(_buffer.allocate(4 + fbe_map_size) - _buffer.offset());
    assert(((fbe_map_offset > 0) && ((_buffer.offset() + fbe_map_offset + 4 + fbe_map_size) <= _buffer.size())) && "Model is broken!");

    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_map_offset;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_map_offset)) = (uint32_t)size;

    memset((char*)(_buffer.data() + _buffer.offset() + fbe_map_offset + 4), 0, fbe_map_size);

    return std::make_pair(FieldModel<TKey>(_buffer, fbe_map_offset + 4), FieldModel<TValue>(_buffer, fbe_map_offset + 4 + fbe_model_key.fbe_size()));
}

template <typename TKey, typename TValue>
inline bool FieldModelMap<TKey, TValue>::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_map_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if (fbe_map_offset == 0)
        return true;

    if ((_buffer.offset() + fbe_map_offset + 4) > _buffer.size())
        return false;

    uint32_t fbe_map_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_map_offset));

    FieldModel<TKey> fbe_model_key(_buffer, fbe_map_offset + 4);
    FieldModel<TValue> fbe_model_value(_buffer, fbe_map_offset + 4 + fbe_model_key.fbe_size());
    for (size_t i = fbe_map_size; i-- > 0;)
    {
        if (!fbe_model_key.verify())
            return false;
        fbe_model_key.fbe_shift(fbe_model_key.fbe_size() + fbe_model_value.fbe_size());
        if (!fbe_model_value.verify())
            return false;
        fbe_model_value.fbe_shift(fbe_model_key.fbe_size() + fbe_model_value.fbe_size());
    }

    return true;
}

template <typename TKey, typename TValue>
inline void FieldModelMap<TKey, TValue>::get(std::map<TKey, TValue>& values) const noexcept
{
    values.clear();

    size_t fbe_map_size = size();
    if (fbe_map_size == 0)
        return;

    auto fbe_model = (*this)[0];
    for (size_t i = fbe_map_size; i-- > 0;)
    {
        TKey key;
        TValue value;
        fbe_model.first.get(key);
        fbe_model.second.get(value);
        values.emplace(key, value);
        fbe_model.first.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
        fbe_model.second.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
    }
}

template <typename TKey, typename TValue>
inline void FieldModelMap<TKey, TValue>::get(std::unordered_map<TKey, TValue>& values) const noexcept
{
    values.clear();

    size_t fbe_map_size = size();
    if (fbe_map_size == 0)
        return;

    auto fbe_model = (*this)[0];
    for (size_t i = fbe_map_size; i-- > 0;)
    {
        TKey key;
        TValue value;
        fbe_model.first.get(key);
        fbe_model.second.get(value);
        values.emplace(key, value);
        fbe_model.first.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
        fbe_model.second.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
    }
}

template <typename TKey, typename TValue>
inline void FieldModelMap<TKey, TValue>::set(const std::map<TKey, TValue>& values) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = resize(values.size());
    for (const auto& value : values)
    {
        fbe_model.first.set(value.first);
        fbe_model.first.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
        fbe_model.second.set(value.second);
        fbe_model.second.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
    }
}

template <typename TKey, typename TValue>
inline void FieldModelMap<TKey, TValue>::set(const std::unordered_map<TKey, TValue>& values) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    auto fbe_model = resize(values.size());
    for (const auto& value : values)
    {
        fbe_model.first.set(value.first);
        fbe_model.first.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
        fbe_model.second.set(value.second);
        fbe_model.second.fbe_shift(fbe_model.first.fbe_size() + fbe_model.second.fbe_size());
    }
}

} // namespace FBE
