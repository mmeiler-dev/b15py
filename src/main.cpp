#include<b15f/b15f.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(b15py, handle) {
  handle.doc() = "Dies ist ein Module mit Bindings für den B15F-Treiber";
  
  py::class_<B15F>(
                    handle, "B15F"
                  )
    .def("getInstance", &B15F::getInstance)
    .def("reconnect", &B15F::reconnect)
    .def("discard", &B15F::discard)
    .def("testConnection", &B15F::testConnection)
    .def("testIntConv", &B15F::testIntConv)
    .def("getBoardInfo", &B15F::getBoardInfo)
    .def("delay_ms", &B15F::delay_ms)
    .def("delay_us", &B15F::delay_us)
    .def("reverse", &B15F::reverse)
    .def("exec", &B15F::exec)
    //.def("abort", py::overload_cast<std::string>(&B15F::abort))
    //.def("abort", py::overload_cast<std::function<void(std::exception&)>(&B15F::abort))
    .def("setAbortHandler", &B15F::setAbortHandler)
    .def("activeSelfTestMode", &B15F::activateSelfTestMode)
    .def("digitalWrite0", &B15F::digitalWrite0)
    .def("digitalWrite1", &B15F::digitalWrite1)
    .def("digitalRead0", &B15F::digitalRead0)
    .def("digitalRead1", &B15F::digitalRead1)
    .def("readDipSwitch", &B15F::readDipSwitch)
    .def("analogWrite0", &B15F::analogWrite0)
    .def("analogWrite1", &B15F::analogWrite1)
    .def("analogRead", &B15F::analogRead)
    .def("analogSequence", &B15F::analogSequence)
    .def("pwmSetFrequency", &B15F::pwmSetFrequency)
    .def("pwmSetValue", &B15F::pwmSetValue)
    .def("setMem8", &B15F::setMem8)
    .def("getMem8", &B15F::getMem8)
    .def("setMem16", &B15F::setMem16)
    .def("getMem16", &B15F::getMem16)
    .def("setRegister", &B15F::setRegister)
    .def("getRegister", &B15F::getRegister)
    .def("getInterruptCounterOffset", &B15F::getInterruptCounterOffset)
    .def("setServoEnabled", &B15F::setServoEnabled)
    .def("setServoDisabled", &B15F::setServoDisabled)
    .def("setServoPosition", &B15F::setServoPosition)
    ;
}

