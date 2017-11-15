#ifndef COURSE_WORK_MESSAGEQUEUEDRAWER_H
#define COURSE_WORK_MESSAGEQUEUEDRAWER_H


#include <queue>
#include "../Drawable.h"
#include "../../messages/Message.h"

class MessageQueueDrawer : public Drawable {
protected:
    std::queue<Message*> *messages;

public:
    void setMessages(std::queue<Message*> *messages);
    void render ();
};


#endif //COURSE_WORK_MESSAGEQUEUEDRAWER_H
