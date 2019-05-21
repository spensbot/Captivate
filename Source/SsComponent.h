/*
  ==============================================================================

    SsComponent.h
    Created: 19 May 2019 8:49:57pm
    Author:  Spenser

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "CaptivateParams.h"

//==============================================================================
/*
*/
class SsComponent    : public Component, public MouseListener
{
public:
    SsComponent(bool _midiControllable, String _helpText);
    ~SsComponent();

	void paintMidiOverlay(Graphics& g);
	void mouseEnter(const MouseEvent& event) override;
	void mouseExit(const MouseEvent& event) override;
	void mouseDown(const MouseEvent& event) override;

private:
	bool midiControllable;
	String helpText;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SsComponent)
};
