/* I2C Slave Code */
#include <asf.h>
#include <stdio.h>

void configure_i2c_slave(void)
{
  struct i2c_slave_config config_i2c_slave;
  i2c_slave_get_config_defaults(&config_i2c_slave);
  config_i2c_slave.address = 0x12;
  config_i2c_slave.pinmux_pad0 = EDBG_I2C_SERCOM_PINMUX_PAD0;
  config_i2c_slave.pinmux_pad1 = EDBG_I2C_SERCOM_PINMUX_PAD1;
  i2c_slave_init(&i2c_slave_instance, SERCOM2, &config_i2c_slave);
  i2c_slave_enable(&i2c_slave_instance);
}

int main(void)
{
  uint8_t data = 0xA5;

  configure_i2c_slave();

  while(1) {
    if(i2c_slave_read_packet_wait(&i2c_slave_instance, &data, 1, 1000) == STATUS_OK)
      i2c_slave_write_packet_wait(&i2c_slave_instance, &data, 1, 1000
