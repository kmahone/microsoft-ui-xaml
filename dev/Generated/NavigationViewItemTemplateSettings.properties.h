// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class NavigationViewItemTemplateSettingsProperties
{
public:
    NavigationViewItemTemplateSettingsProperties();

    void CompactWidth(double value);
    double CompactWidth();

    void IsChildSelected(bool value);
    bool IsChildSelected();

    static winrt::DependencyProperty CompactWidthProperty() { return s_CompactWidthProperty; }
    static winrt::DependencyProperty IsChildSelectedProperty() { return s_IsChildSelectedProperty; }

    static GlobalDependencyProperty s_CompactWidthProperty;
    static GlobalDependencyProperty s_IsChildSelectedProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
