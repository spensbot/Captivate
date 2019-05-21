/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "CaptivateGui.h"

//==============================================================================
/**
*/
class CaptivateTest1AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    CaptivateTest1AudioProcessorEditor (CaptivateTest1AudioProcessor&);
    ~CaptivateTest1AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    CaptivateTest1AudioProcessor& processor;
	CaptivateGui captivateGui;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CaptivateTest1AudioProcessorEditor)
};
