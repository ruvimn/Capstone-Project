#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "DistortionEffect.h"
#include <cstddef>


//==============================================================================
/**
	The format is generated by JUCE. 
*/
class DistortionEffectAudioProcessor : public AudioProcessor
{
public:
	//==============================================================================
	DistortionEffectAudioProcessor();
	~DistortionEffectAudioProcessor();

	//==============================================================================
	void prepareToPlay(double sampleRate, int samplesPerBlock) override;
	void releaseResources() override;

	void processBlock(AudioSampleBuffer&, MidiBuffer&) override;

	//==============================================================================
	AudioProcessorEditor* createEditor() override;
	bool hasEditor() const override;

	//==============================================================================
	const String getName() const override;

	int getNumParameters() override;
	float getParameter(int index) override;
	void setParameter(int index, float newValue) override;

	const String getParameterName(int index) override;
	const String getParameterText(int index) override;

	const String getInputChannelName(int channelIndex) const override;
	const String getOutputChannelName(int channelIndex) const override;
	bool isInputChannelStereoPair(int index) const override;
	bool isOutputChannelStereoPair(int index) const override;

	bool acceptsMidi() const override;
	bool producesMidi() const override;
	bool silenceInProducesSilenceOut() const override;
	double getTailLengthSeconds() const override;

	//==============================================================================
	int getNumPrograms() override;
	int getCurrentProgram() override;
	void setCurrentProgram(int index) override;
	const String getProgramName(int index) override;
	void changeProgramName(int index, const String& newName) override;

	//==============================================================================
	void getStateInformation(MemoryBlock& destData) override;
	void setStateInformation(const void* data, int sizeInBytes) override;

	//Plugin-specific public data and functions
	enum Parameters_t { bypass = 0, inGain, outGain, shift, targetBitDepth, lpFreq, hpFreq, lpEnabled, hpEnabled, drive, error, clip, totalNumParams };

	bool NeedsUIUpdate() {
		return UIUpdateFlag;
	}

	void RequestUIUpdate() {
		UIUpdateFlag = true;
	}

	void ClearUIUpdateFlag() {
		UIUpdateFlag = false;
	}

private:
	//==============================================================================
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DistortionEffectAudioProcessor)

		//Plugin-specific private data
		bool UIUpdateFlag; //A flag for determining whether or not the UI needs updating.
	float userParams[totalNumParams]; //The array containing current values of all parameters
	DistortionEffect mDistortionEffect; //An instance of the plugin code.
};


#endif  // PLUGINPROCESSOR_H_INCLUDED