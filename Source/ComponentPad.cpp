/*
  ==============================================================================

    ComponentPad.cpp
    Created: 19 May 2019 11:22:28pm
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ComponentPad.h"

//==============================================================================
ComponentPad::ComponentPad(int _id, bool _midiControllable, String _helpText) : SsComponent(_midiControllable, _helpText), id(_id)
{
	addAndMakeVisible(padLabel);
	padLabel.setText(String("Pad ") + String(_id), sendNotification);
	padLabel.setEditable(false, true);
}

ComponentPad::~ComponentPad()
{
}

void ComponentPad::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    

	paintMidiOverlay(g);
}

void ComponentPad::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
	padLabel.setBounds(getLocalBounds());
}
