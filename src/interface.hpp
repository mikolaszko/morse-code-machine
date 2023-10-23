#include <string>

class Interface
{
public:
    bool isRecording = false;

    void toggleRecording()
    {
        isRecording = !isRecording;
    };
};