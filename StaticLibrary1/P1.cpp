#include "pch.h"
#include "P1.h"
#if __has_include("P1.g.cpp")
#include "P1.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::StaticLibrary1::implementation
{
    P1::P1()
    {
        InitializeComponent();
    }

    int32_t P1::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void P1::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void P1::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
