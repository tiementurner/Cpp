#pragma once
template <typename T> 
void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <typename T>
const T& min(T &x, T &y)
{
    if (x > y)
        return (y);
    if (y > x)
        return (x);
    else
        return (y);
}

template <typename T> 
const   T& max(T &x, T &y)
{
    if (x < y)
        return (y);
    if (y < x)
        return (x);
    else
        return (y);
}