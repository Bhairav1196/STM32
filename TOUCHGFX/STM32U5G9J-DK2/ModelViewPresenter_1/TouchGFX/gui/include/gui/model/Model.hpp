#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();


protected:
    ModelListener* modelListener;
    //*************** Step 2*****************
    // Added this variable in protected mode after modelLister pointer

    // ************ for Step 3 ********************
    // Now go to ModelLister.hpp via Model.cpp file
    bool buttonState = false;
};

#endif // MODEL_HPP
