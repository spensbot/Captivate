/*
  ==============================================================================

    SsComponent.cpp
    Created: 19 May 2019 8:49:57pm
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "SsComponent.h"

//==============================================================================
SsComponent::SsComponent(bool _midiControllable, String _helpText) : midiControllable(_midiControllable), helpText(_helpText)
{
}

SsComponent::~SsComponent()
{
}

void SsComponent::paintMidiOverlay (Graphics& g)
{
	if (true) { //Overlay rectangle over midi controllable component if midi map mode is on
		g.setColour(MIDI_MAP_COLOUR);
		g.fillRect(getLocalBounds());
	}
}

void SsComponent::mouseEnter(const MouseEvent& event) {
	if (helpText != "") {
		//Set the help-box text if available.
	}
}

void SsComponent::mouseExit(const MouseEvent& event) {
	//Set the help-box text to ""
}

void SsComponent::mouseDown(const MouseEvent& event) {
	if (true) { //should be true if midi map mode is on
		if (midiControllable) {
			//map the parameter to the midi control
		}
	}
}
