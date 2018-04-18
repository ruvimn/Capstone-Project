/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DistortionEffectAudioProcessorEditor  : public AudioProcessorEditor,
                                              public Timer,
                                              public Slider::Listener,
                                              public ComboBox::Listener
{
public:
    //==============================================================================
    DistortionEffectAudioProcessorEditor (DistortionEffectAudioProcessor& ownerFilter);
    ~DistortionEffectAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void timerCallback() override;

	DistortionEffectAudioProcessor* getProcessor() const {
		return static_cast <DistortionEffectAudioProcessor*>(getAudioProcessor());
	}
    //[/UserMethods]


    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> inputGainSld;
    ScopedPointer<Slider> outputGainSld;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Slider> driveSld;
    ScopedPointer<Label> driveLabel;
    ScopedPointer<Label> label14;
    ScopedPointer<ComboBox> clipBox;
    ScopedPointer<Label> label15;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DistortionEffectAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
