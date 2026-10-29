#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    //*************Step 3***********
    // Add this function which we will ustilise for the  scree update
    // ************ for Step 4 *********************
    // Go to "MainScreenPresenter.cpp"
    virtual void setLight (bool state) {};

protected:
    Model* model;

};

#endif // MODELLISTENER_HPP
