#ifndef BLOCK_H
#define BLOCK_H
class Block{
public:
    virtual void draw() = 0;
    virtual void down(int x, int y) = 0;
};
class Square : public Block{
    void draw();
    void down(int x, int y);
};
class Straight : public Block{
    void draw();
    void down(int x, int y);
};
class Fuck : public Block{
    void draw();
    void down(int x, int y);
};
class Lchair : public Block{
    void draw();
    void down(int x, int y);
};
class Rchair : public Block{
    void draw();
    void down(int x, int y);
};
class Lholder : public Block{
    void draw();
    void down(int x, int y);
};
class Rholder : public Block{
    void draw();
    void down(int x, int y);
};
#endif