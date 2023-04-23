class AnalogControlDevice {
public:
    AnalogControlDevice() {
        // ����������� ������
    }

    void setAnalogValue(float value) {
        // ������������� ���������� �������� ����������
        // value - �������� ����������� ������� � ��������� �� 0 �� 1
    }

    float getAnalogValue() const {
        // ���������� ������� ���������� �������� ����������
        return m_analogValue;
    }

    void turnOn() {
        // �������� ����������
        m_isOn = true;
    }

    void turnOff() {
        // ��������� ����������
        m_isOn = false;
    }

    bool isOn() const {
        // ���������� ��������� ���������� (���. ��� ����.)
        return m_isOn;
    }

private:
    float m_analogValue = 0; // ������� ���������� �������� ����������
    bool m_isOn = false; // ��������� ���������� (���. ��� ����.)
};
