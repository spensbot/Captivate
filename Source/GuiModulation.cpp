/*
  ==============================================================================

    GuiModulation.cpp
    Created: 19 May 2019 10:47:54am
    Author:  Spenser

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "GuiModulation.h"

//==============================================================================
GuiModulation::GuiModulation()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GuiModulation::~GuiModulation()
{
}

void GuiModulation::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("GuiModulation", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void GuiModulation::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
