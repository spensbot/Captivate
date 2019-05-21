/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "CaptivateParams.h"

//==============================================================================
CaptivateTest1AudioProcessorEditor::CaptivateTest1AudioProcessorEditor (CaptivateTest1AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
	addAndMakeVisible(captivateGui);
	setResizeLimits(MIN_WIDTH, MIN_HEIGHT, MAX_WIDTH, MAX_HEIGHT);
    setSize(DEFAULT_WIDTH, DEFAULT_HEIGHT);
}

CaptivateTest1AudioProcessorEditor::~CaptivateTest1AudioProcessorEditor()
{
}

//==============================================================================
void CaptivateTest1AudioProcessorEditor::paint (Graphics& g)
{
    
}

void CaptivateTest1AudioProcessorEditor::resized()
{
	captivateGui.setBounds(getLocalBounds());
}
