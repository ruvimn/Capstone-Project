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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DistortionEffectAudioProcessorEditor::DistortionEffectAudioProcessorEditor (DistortionEffectAudioProcessor& ownerFilter)
    : AudioProcessorEditor(ownerFilter)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (inputGainSld = new Slider ("Input Gain Slider"));
    inputGainSld->setRange (-75, 20, 0.1);
    inputGainSld->setSliderStyle (Slider::LinearVertical);
    inputGainSld->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    inputGainSld->setColour (Slider::thumbColourId, Colours::white);
    inputGainSld->setColour (Slider::trackColourId, Colour (0xdfff0000));
    inputGainSld->addListener (this);

    inputGainSld->setBounds (288, 8, 48, 240);

    addAndMakeVisible (outputGainSld = new Slider ("Output Gain Slider"));
    outputGainSld->setRange (-75, 20, 0.1);
    outputGainSld->setSliderStyle (Slider::LinearVertical);
    outputGainSld->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    outputGainSld->setColour (Slider::thumbColourId, Colours::white);
    outputGainSld->setColour (Slider::trackColourId, Colour (0xdfff0000));
    outputGainSld->addListener (this);

    outputGainSld->setBounds (352, 8, 48, 240);

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Distortion Effect\n"
                                           "\n")));
    label3->setFont (Font ("KaiTi", 37.30f, Font::plain).withTypefaceStyle ("Bold").withExtraKerningFactor (0.069f));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (Label::backgroundColourId, Colour (0x0043ad00));
    label3->setColour (Label::textColourId, Colour (0xffecfcea));
    label3->setColour (Label::outlineColourId, Colour (0x00000000));
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (24, 24, 232, 72);

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("In")));
    label4->setFont (Font ("KaiTi", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (Label::textColourId, Colours::white);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (296, 256, 32, 24);

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Out")));
    label5->setFont (Font ("KaiTi", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (Label::textColourId, Colours::white);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (352, 256, 47, 24);

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("Gain")));
    label6->setFont (Font ("KaiTi", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centred);
    label6->setEditable (false, false, false);
    label6->setColour (Label::textColourId, Colour (0xfffffefe));
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label6->setBounds (296, 280, 88, 24);

    addAndMakeVisible (driveSld = new Slider ("Drive Slider"));
    driveSld->setRange (-10, 20, 0.1);
    driveSld->setSliderStyle (Slider::LinearHorizontal);
    driveSld->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    driveSld->setColour (Slider::thumbColourId, Colours::white);
    driveSld->setColour (Slider::trackColourId, Colour (0xdfff0000));
    driveSld->setColour (Slider::rotarySliderFillColourId, Colour (0xff334248));
    driveSld->setColour (Slider::rotarySliderOutlineColourId, Colours::white);
    driveSld->addListener (this);

    driveSld->setBounds (8, 232, 240, 80);

    addAndMakeVisible (driveLabel = new Label ("Drive Label",
                                               TRANS("Distortion Amount")));
    driveLabel->setFont (Font ("KaiTi", 16.70f, Font::plain).withTypefaceStyle ("Regular"));
    driveLabel->setJustificationType (Justification::centredLeft);
    driveLabel->setEditable (false, false, false);
    driveLabel->setColour (Label::textColourId, Colours::white);
    driveLabel->setColour (TextEditor::textColourId, Colours::black);
    driveLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    driveLabel->setBounds (8, 208, 150, 24);

    addAndMakeVisible (label14 = new Label ("new label",
                                            TRANS("dB")));
    label14->setFont (Font ("KaiTi", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (Label::textColourId, Colours::white);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label14->setBounds (400, 224, 40, 24);

    addAndMakeVisible (clipBox = new ComboBox ("Clipping Style Box"));
    clipBox->setEditableText (false);
    clipBox->setJustificationType (Justification::centredLeft);
    clipBox->setTextWhenNothingSelected (String());
    clipBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    clipBox->addItem (TRANS("Hard"), 1);
    clipBox->addItem (TRANS("Soft"), 2);
    clipBox->addListener (this);

    clipBox->setBounds (112, 128, 126, 24);

    addAndMakeVisible (label15 = new Label ("new label",
                                            TRANS("Distortion Type")));
    label15->setFont (Font ("KaiTi", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (Label::textColourId, Colours::white);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label15->setBounds (8, 128, 120, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (475, 350);

    //[Constructor] You can add your own custom stuff here..
	startTimer(30);

	//Set double-click return values
	inputGainSld->setDoubleClickReturnValue(true, 0.0f);
	outputGainSld->setDoubleClickReturnValue(true, 0.0f);

	ownerFilter.RequestUIUpdate();
	timerCallback();
    //[/Constructor]
}

DistortionEffectAudioProcessorEditor::~DistortionEffectAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    inputGainSld = nullptr;
    outputGainSld = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    driveSld = nullptr;
    driveLabel = nullptr;
    label14 = nullptr;
    clipBox = nullptr;
    label15 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DistortionEffectAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DistortionEffectAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DistortionEffectAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
	DistortionEffectAudioProcessor* ourProcessor = getProcessor();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == inputGainSld)
    {
        //[UserSliderCode_inputGainSld] -- add your slider handling code here..
        //[/UserSliderCode_inputGainSld]
    }
    else if (sliderThatWasMoved == outputGainSld)
    {
        //[UserSliderCode_outputGainSld] -- add your slider handling code here..

		//Push the value of the input gain slider to the audio processor.
		ourProcessor->setParameter(DistortionEffectAudioProcessor::outGain, (float)sqrt(pow(10, .1*outputGainSld->getValue())));
        //[/UserSliderCode_outputGainSld]
    }
    else if (sliderThatWasMoved == driveSld)
    {
        //[UserSliderCode_driveSld] -- add your slider handling code here..
		ourProcessor->setParameter(DistortionEffectAudioProcessor::drive, (float)sqrt(pow(10, .1*driveSld->getValue())));
        //[/UserSliderCode_driveSld]
    }

    //[UsersliderValueChanged_Post]
	ourProcessor = nullptr;
    //[/UsersliderValueChanged_Post]
}

void DistortionEffectAudioProcessorEditor::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
	DistortionEffectAudioProcessor* ourProcessor = getProcessor();
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == clipBox)
    {
        //[UserComboBoxCode_clipBox] -- add your combo box handling code here..
		ourProcessor->setParameter(DistortionEffectAudioProcessor::clip, (float)clipBox->getSelectedItemIndex());
        //[/UserComboBoxCode_clipBox]
    }

    //[UsercomboBoxChanged_Post]
	ourProcessor = nullptr;
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void DistortionEffectAudioProcessorEditor::timerCallback() {
	DistortionEffectAudioProcessor* ourProcessor = getProcessor();

	//Exchange data between GUI and ourProcessor here.
	if (ourProcessor->NeedsUIUpdate()) {

		//Update inputGainSld
		inputGainSld->setValue(10 * log10((float)pow(ourProcessor->getParameter(DistortionEffectAudioProcessor::inGain), 2)), dontSendNotification);

		//Update outputGainSld
		outputGainSld->setValue(10 * log10((float)pow(ourProcessor->getParameter(DistortionEffectAudioProcessor::outGain), 2)), dontSendNotification);

		//Update driveSld
		driveSld->setValue(10 * log10((float)pow(ourProcessor->getParameter(DistortionEffectAudioProcessor::drive), 2)), dontSendNotification);

		//Update clipBox
		clipBox->setSelectedItemIndex(ourProcessor->getParameter(DistortionEffectAudioProcessor::clip), dontSendNotification);

		//Clear UI Update flag
		ourProcessor->ClearUIUpdateFlag();
	}

	ourProcessor = nullptr;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DistortionEffectAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="DistortionEffectAudioProcessor&amp; ownerFilter"
                 variableInitialisers="AudioProcessorEditor(ownerFilter)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330" fixedSize="0"
                 initialWidth="475" initialHeight="350">
  <BACKGROUND backgroundColour="ff000000"/>
  <SLIDER name="Input Gain Slider" id="a311a46bf5d29a78" memberName="inputGainSld"
          virtualName="" explicitFocusOrder="0" pos="288 8 48 240" thumbcol="ffffffff"
          trackcol="dfff0000" min="-75.00000000000000000000" max="20.00000000000000000000"
          int="0.10000000000000000555" style="LinearVertical" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <SLIDER name="Output Gain Slider" id="72d0956117bc8903" memberName="outputGainSld"
          virtualName="" explicitFocusOrder="0" pos="352 8 48 240" thumbcol="ffffffff"
          trackcol="dfff0000" min="-75.00000000000000000000" max="20.00000000000000000000"
          int="0.10000000000000000555" style="LinearVertical" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="new label" id="be270b33afeb27ed" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="24 24 232 72" bkgCol="43ad00" textCol="ffecfcea"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Distortion Effect&#10;&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="KaiTi" fontsize="37.29999999999999715783" kerning="0.06900000000000000577"
         bold="1" italic="0" justification="36" typefaceStyle="Bold"/>
  <LABEL name="new label" id="56a6de5e1fcbe078" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="296 256 32 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="In" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="KaiTi"
         fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="32f20900f8c8ed1b" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="352 256 47 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Out" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="KaiTi"
         fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="97ed6e7dc8dd31ce" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="296 280 88 24" textCol="fffffefe"
         edTextCol="ff000000" edBkgCol="0" labelText="Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="KaiTi"
         fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="36"/>
  <SLIDER name="Drive Slider" id="16c24b2e401c671" memberName="driveSld"
          virtualName="" explicitFocusOrder="0" pos="8 232 240 80" thumbcol="ffffffff"
          trackcol="dfff0000" rotarysliderfill="ff334248" rotaryslideroutline="ffffffff"
          min="-10.00000000000000000000" max="20.00000000000000000000"
          int="0.10000000000000000555" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
  <LABEL name="Drive Label" id="95175d949c3b593d" memberName="driveLabel"
         virtualName="" explicitFocusOrder="0" pos="8 208 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Distortion Amount"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="KaiTi" fontsize="16.69999999999999928946" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="80727f66552e0903" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="400 224 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="KaiTi"
         fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="Clipping Style Box" id="6fd8ab01246572e9" memberName="clipBox"
            virtualName="" explicitFocusOrder="0" pos="112 128 126 24" editable="0"
            layout="33" items="Hard&#10;Soft" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="dd2d4e515ac4f44f" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="8 128 120 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Distortion Type"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="KaiTi" fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
